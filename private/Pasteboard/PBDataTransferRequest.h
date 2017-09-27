//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSProgressReporting.h"

@class NSProgress, NSString, PBItem, PBItemCollection, PBItemRepresentation;

@interface PBDataTransferRequest : NSObject <NSProgressReporting>
{
    PBItemCollection *_itemCollection;
    PBItem *_item;
    PBItemRepresentation *_repr;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) PBItemRepresentation *repr; // @synthesize repr=_repr;
@property(retain, nonatomic) PBItem *item; // @synthesize item=_item;
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

