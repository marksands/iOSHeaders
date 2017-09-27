//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class AKController, UIStackView;

@interface AKModernToolbarPicker : UIControl
{
    UIStackView *_stackview;
    AKController *_controller;
    long long _currentTag;
}

@property(nonatomic) long long currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIStackView *stackview; // @synthesize stackview=_stackview;
- (void).cxx_destruct;
- (void)revalidateItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

