//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SAUIAudioData;
@protocol SAAceSerializable;

@interface SAUISayIt : SABaseClientBoundCommand
{
}

+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sayIt;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *dialogIdentifier;
@property(retain, nonatomic) id <SAAceSerializable> context;
@property(retain, nonatomic) SAUIAudioData *audioData;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

