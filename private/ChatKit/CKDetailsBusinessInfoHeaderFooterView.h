//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "CKDetailsHeaderFooterView.h"

@class CKBusinessInfoView, NSString;

@interface CKDetailsBusinessInfoHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>
{
    CKBusinessInfoView *_businessInfoView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) CKBusinessInfoView *businessInfoView; // @synthesize businessInfoView=_businessInfoView;
- (void).cxx_destruct;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

