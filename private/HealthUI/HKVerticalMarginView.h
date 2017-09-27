//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface HKVerticalMarginView : UIView
{
    unsigned long long _offsetOptions;
    id <HKVerticalMarginDelegate> _marginDelegate;
    double _currentKeyboardHeight;
}

@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(retain, nonatomic) id <HKVerticalMarginDelegate> marginDelegate; // @synthesize marginDelegate=_marginDelegate;
@property(nonatomic) unsigned long long offsetOptions; // @synthesize offsetOptions=_offsetOptions;
- (void).cxx_destruct;
- (id)_findViewController;
- (double)_findTabBarHeightWithController:(id)arg1;
- (double)_bottomOffsetWithController:(id)arg1;
- (double)_topOffsetWithController:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSubview:(id)arg1 offsetOptions:(unsigned long long)arg2;

@end

