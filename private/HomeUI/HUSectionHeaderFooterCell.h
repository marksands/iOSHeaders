//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "HUCellSeparatorAppearanceDefining.h"

@class HUItemTableSectionHeaderFooterView, NSString;

@interface HUSectionHeaderFooterCell : UITableViewCell <HUCellSeparatorAppearanceDefining>
{
    HUItemTableSectionHeaderFooterView *_headerFooterView;
}

@property(readonly, nonatomic) HUItemTableSectionHeaderFooterView *headerFooterView; // @synthesize headerFooterView=_headerFooterView;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool prefersSeparatorsHidden;
- (void)prepareForReuse;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

