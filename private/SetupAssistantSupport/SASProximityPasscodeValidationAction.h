//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction
{
    _Bool _passcodeValid;
    NSString *_passcode;
}

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;
@property _Bool passcodeValid; // @synthesize passcodeValid=_passcodeValid;
@property(retain) NSString *passcode; // @synthesize passcode=_passcode;
- (void).cxx_destruct;
- (void)setResponseFromDictionary:(id)arg1;
- (id)responsePayload;
- (id)requestPayload;
- (_Bool)hasResponse;

@end

