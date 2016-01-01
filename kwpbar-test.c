#include "kwpbar.h"

/*
 * KwPBar for C, tests
 * Copyright © 2013-2016, Chris Warrick.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions, and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the author of this software nor the names of
 *    contributors to this software may be used to endorse or promote
 *    products derived from this software without specific prior written
 *    consent.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

int main(int argc, char* argv[]) {
    fprintf(stderr, "KwPbar for C test suite\n");
    fprintf(stderr, "\nTesting printing...\n");
    int t1 = pbar(0, 2);  // 0
    int t2 = pbar(1, 2);  // 0
    int t3 = pbar(2, 2);  // 0
    fprintf(stderr, "\ndone.\n");
    fprintf(stderr, "\nTesting erasing...\n");
    int t4 = pbar(2, 3);  // 0
    erase_pbar();
    fprintf(stderr, "done.\n");
    fprintf(stderr, "\nTesting expected failures...\n");
    int t5 = pbar(1, 0);  // 1
    int t6 = pbar(2, 1);  // 2
    int t7 = pbar(-2, 1); // 2
    fprintf(stderr, "done.\n");
    int score = t1 + t2 + t3 + t4 + t5 + t6 + t7;
    int expected = 5;
    if (score == expected) {
        fprintf(stderr, "\nPASS (error score %d/%d)\n", score, expected);
    } else {
        fprintf(stderr, "\nFAIL (error score %d/%d)\n", score, expected);
    }
    return (expected - score);
}
