//
//  HintHelper.h
//  HintMakerExample
//
//  Created by Eric McConkie on 3/16/12.
/*
Copyright (c) 2012 Eric McConkie

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#import <Foundation/Foundation.h>
#import "EMHint.h"
#import "EMViewController.h"
#define  kFirstMessage @"Spotlights to help lead your users...Tap along."
typedef enum
{
    EMHintDialogTypeIntro,
    EMHintDialogTypeInfo,
    EMHintDialogTypeButton,
    EMHintDialogTypeList,
    EMHintDialogTypeBack,
    EMHintDialogTypeCount
}EMHintDialogType;


@interface HintHelper : NSObject<EMHintDelegate>
{
    EMHintDialogType _curType;    
    EMHint *modalState;
    UIViewController *_vc;
}
- (id)initWithViewController:(UIViewController*)vc;
@end