//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantUI/NSObject-Protocol.h>

@class NSString, PSPasscodeField;

@protocol PSPasscodeFieldDelegate <NSObject>
- (void)passcodeField:(PSPasscodeField *)arg1 enteredPasscode:(NSString *)arg2;

@optional
- (NSString *)passcodeField:(PSPasscodeField *)arg1 shouldInsertText:(NSString *)arg2;
@end

