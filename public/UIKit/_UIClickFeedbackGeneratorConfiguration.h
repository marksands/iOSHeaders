//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback<_UIFeedbackDiscretePlayable>;

__attribute__((visibility("hidden")))
@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_pressedDownFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_pressedUpFeedback;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *pressedUpFeedback; // @synthesize pressedUpFeedback=_pressedUpFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *pressedDownFeedback; // @synthesize pressedDownFeedback=_pressedDownFeedback;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end

