//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary, NSString;

@interface _UIFeedbackStatesBehaviorConfiguration : _UIFeedbackGeneratorConfiguration
{
    NSDictionary *_stateChangeConfigurations;
    NSString *_initialState;
}

+ (id)keyFromState:(id)arg1 toState:(id)arg2;
@property(retain, nonatomic) NSString *initialState; // @synthesize initialState=_initialState;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *stateChangeConfigurations; // @synthesize stateChangeConfigurations=_stateChangeConfigurations;
- (id)feedbackKeyPaths;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
