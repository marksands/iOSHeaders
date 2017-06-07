//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

@class CKBalloonImageView, UIView;
@protocol CKTranscriptPluginView;

@interface CKTranscriptPluginColoredBalloonView : CKColoredBalloonView
{
    _Bool _isInteractive;
    _Bool _suppressMask;
    UIView<CKTranscriptPluginView> *_pluginView;
    UIView *_pluginSnapshotViewForThrowAnimation;
    CKBalloonImageView *_tailMask;
    UIView *_pluginSnapshotView;
}

@property(nonatomic) _Bool suppressMask; // @synthesize suppressMask=_suppressMask;
@property(retain, nonatomic) UIView *pluginSnapshotView; // @synthesize pluginSnapshotView=_pluginSnapshotView;
@property(retain, nonatomic) CKBalloonImageView *tailMask; // @synthesize tailMask=_tailMask;
@property(retain, nonatomic) UIView *pluginSnapshotViewForThrowAnimation; // @synthesize pluginSnapshotViewForThrowAnimation=_pluginSnapshotViewForThrowAnimation;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(retain, nonatomic) UIView<CKTranscriptPluginView> *pluginView; // @synthesize pluginView=_pluginView;
- (void).cxx_destruct;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)invisibleInkEffectViewWasUncovered;
- (id)imageForInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)attachInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;

@end
