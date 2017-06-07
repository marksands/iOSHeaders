//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView, NSString;

@interface CCUIContentModuleContentContainerView : UIView
{
    _Bool _expanded;
    _Bool _moduleProvidesOwnPlatter;
    _Bool _clipsContentInCompactMode;
    MTMaterialView *_moduleMaterialView;
    NSString *_materialViewGroupName;
}

@property(nonatomic) _Bool clipsContentInCompactMode; // @synthesize clipsContentInCompactMode=_clipsContentInCompactMode;
@property(copy, nonatomic) NSString *materialViewGroupName; // @synthesize materialViewGroupName=_materialViewGroupName;
@property(nonatomic) _Bool moduleProvidesOwnPlatter; // @synthesize moduleProvidesOwnPlatter=_moduleProvidesOwnPlatter;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (_Bool)_isContentClippingRequiredForSubview:(id)arg1;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
@property(readonly, nonatomic) MTMaterialView *moduleMaterialView; // @synthesize moduleMaterialView=_moduleMaterialView;
- (void)_configureModuleMaterialViewIfNecessary;
- (void)transitionToExpandedMode:(_Bool)arg1;
- (void)_transitionToExpandedMode:(_Bool)arg1 force:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

