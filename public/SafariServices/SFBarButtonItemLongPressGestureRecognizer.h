//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILongPressGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    id _longPressTarget;
    SEL _longPressAction;
}

+ (id)gestureRecognizerWithLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void).cxx_destruct;
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)longPress:(id)arg1;

@end

