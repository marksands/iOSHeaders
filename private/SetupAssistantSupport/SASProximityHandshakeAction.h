//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityHandshakeAction : SASProximityAction
{
    _Bool _hasPasscodeSet;
    int _simplePasscodeType;
    int _unlockType;
    NSString *_platformType;
}

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;
@property int unlockType; // @synthesize unlockType=_unlockType;
@property int simplePasscodeType; // @synthesize simplePasscodeType=_simplePasscodeType;
@property _Bool hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property(copy) NSString *platformType; // @synthesize platformType=_platformType;
- (void).cxx_destruct;
- (void)setResponseFromDictionary:(id)arg1;
- (id)responsePayload;
- (_Bool)hasResponse;

@end

