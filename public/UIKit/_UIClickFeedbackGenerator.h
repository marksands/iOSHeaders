//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFeedbackGenerator.h>

#import <UIKit/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
}

+ (Class)_configurationClass;
- (id)_clickConfiguration;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
- (void)pressedUp;
- (void)pressedDown;
- (id)init;

@end
