//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUILayoutFreeSectionView.h>

@class TLKSectionHeaderView;

@interface SearchUISectionHeaderCardSectionView : SearchUILayoutFreeSectionView
{
    TLKSectionHeaderView *_sectionHeaderView;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain) TLKSectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void).cxx_destruct;
- (void)updateWithCardSection:(id)arg1;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2 style:(unsigned long long)arg3;

@end

