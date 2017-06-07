//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand
{
}

+ (id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)serverEndpointFeatures;
- (_Bool)requiresResponse;
@property(nonatomic) long long trailingSilenceDuration;
@property(copy, nonatomic) NSString *taskName;
@property(nonatomic) double silenceProbability;
@property(nonatomic) long long processedAudioDurationMs;
@property(copy, nonatomic) NSArray *pauseCounts;
@property(nonatomic) long long numOfWords;
@property(nonatomic) double eosLikelihood;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

