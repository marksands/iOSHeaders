//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantUI/BFFTitleView.h>

@class UIButton, UILabel;

@interface BFFSubtitleButtonView : BFFTitleView
{
    UILabel *_subtitleLabel;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setButtonText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

