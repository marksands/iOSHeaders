//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SATTSSpeechSynthesisAudioInfo, SAUIAudioData;

@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand
{
}

+ (id)speechSynthesisPartialResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechSynthesisPartialResponse;
- (_Bool)requiresResponse;
@property(nonatomic) long long currentPacketNumber;
@property(retain, nonatomic) SATTSSpeechSynthesisAudioInfo *aceAudioInfo;
@property(retain, nonatomic) SAUIAudioData *aceAudioData;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
