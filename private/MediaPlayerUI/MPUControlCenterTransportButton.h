//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MediaPlayerUI/MPUTransportButton-Protocol.h>

@class MPUTransportButton, MPUTransportButtonEventHandler, NSString, UIImage, UIVisualEffectView;

@interface MPUControlCenterTransportButton : UIControl <MPUTransportButton>
{
    UIVisualEffectView *_visualEffectView;
    MPUTransportButton *_button;
    UIImage *_transportButtonImage;
}

+ (id)transportButton;
@property(retain, nonatomic) UIImage *transportButtonImage; // @synthesize transportButtonImage=_transportButtonImage;
- (void).cxx_destruct;
- (void)_updateEffectForStateChange:(unsigned long long)arg1;
- (void)_touchDeactivateReceived:(id)arg1;
- (void)_touchActivateReceived:(id)arg1;
- (void)_longPressEndReceived:(id)arg1;
- (void)_longPressBeginReceived:(id)arg1;
- (void)_tapReceived:(id)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
@property(nonatomic) long long transportButtonImageViewContentMode;
@property(nonatomic) _Bool adjustsImageWhenHighlighted;
- (_Bool)wantsCustomHighlightAppearance;
- (void)prepareForReuse;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_62e32a95)arg1;
@property(readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
