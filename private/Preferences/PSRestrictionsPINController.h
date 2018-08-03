//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController
{
}

+ (_Bool)settingEnabled;
- (_Bool)isNumericPIN;
- (_Bool)simplePIN;
- (struct __CFString *)blockedStateKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)defaultsID;
- (id)pinInstructionsPromptFont;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)setPIN:(id)arg1;
- (id)stringsBundle;
- (id)stringsTable;
- (_Bool)validatePIN:(id)arg1;
- (int)pinLength;
- (id)init;

@end

