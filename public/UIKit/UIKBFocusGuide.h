//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFocusGuide.h>

@protocol UIKBFocusGuideDelegate;

__attribute__((visibility("hidden")))
@interface UIKBFocusGuide : UIFocusGuide
{
    unsigned long long focusHeading;
    id <UIKBFocusGuideDelegate> _keyboardDelegate;
}

@property(nonatomic) id <UIKBFocusGuideDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property(nonatomic) unsigned long long focusHeading; // @synthesize focusHeading;
- (void)_didUpdateFocusToPreferredFocusedView;

@end
