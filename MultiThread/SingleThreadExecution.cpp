#include <bits/stdc++.h>

/*************************
 * SingleThreadExecutionパターン
 * 「排他が必要な箇所は排他制御をきちんとしましょうね」というパターン
 * 参考というか丸々引用させていただいたもの：
 * 　https://cutlassfish.wordpress.com/2015/04/06/c-%E3%81%A7-single-thread-execution/
 *************************/
int main()
{
    // 別スレッドで実行するメソッド
	auto f = [](int& count, std::mutex& mutex) {
		for (int n = 0; n < 1000000; n++) {
            // 排他制御
            // 排他がないとtaスレッドとtbスレッドが同時にアクセスしてしまい、
            // 値のインクリメント処理の取りこぼしが発生する。
			std::lock_guard<std::mutex> lg(mutex);
			count++;
		}
	};

	int count = 0;
	std::mutex mutex;

	std::thread ta(f, std::ref(count), std::ref(mutex));
	std::thread tb(f, std::ref(count), std::ref(mutex));

	ta.join();
	tb.join();
	std::cout << count << std::endl;

	return 0;
}