//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface _NTKCDetailActionButton : UIButton
{
    _Bool _disabled;
    NSString *_disabledReason;
}

@property(readonly, nonatomic) NSString *disabledReason; // @synthesize disabledReason=_disabledReason;
@property(readonly, nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (void)_updateColor;
- (void)_setTitle:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

