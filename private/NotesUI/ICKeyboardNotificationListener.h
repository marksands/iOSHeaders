//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICKeyboardNotificationListener : NSObject
{
    struct CGRect _keyboardFrame;
}

+ (id)sharedListener;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (struct CGRect)currentKeyboardFrame;
- (void)dealloc;
- (id)init;

@end

