//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIKeyboardDicationBackgroundGradientView;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackground : UIView
{
    NSArray *_shadows;
    UIKeyboardDicationBackgroundGradientView *_gradient;
}

@property(retain, nonatomic) UIKeyboardDicationBackgroundGradientView *gradient; // @synthesize gradient=_gradient;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)shadows;

@end

