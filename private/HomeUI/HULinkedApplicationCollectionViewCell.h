//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUCollectionViewCellSeparatorsProtocol-Protocol.h>

@class HFItem, HULinkedApplicationView, NSString, UIView;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>
{
    HULinkedApplicationView *_linkedApplicationView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

@property(readonly, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(readonly, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(readonly, nonatomic) HULinkedApplicationView *linkedApplicationView; // @synthesize linkedApplicationView=_linkedApplicationView;
- (void).cxx_destruct;
@property(nonatomic) _Bool bottomSeparatorVisible;
@property(nonatomic) _Bool topSeparatorVisible;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) HFItem *item;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

