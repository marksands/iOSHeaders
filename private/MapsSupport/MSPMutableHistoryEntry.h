//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPHistoryEntry-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class MSPHistoryEntryStorage, NSDate, NSString, NSUUID;

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject>
{
    _Bool _immutable;
    NSUUID *_storageIdentifier;
    NSDate *_usageDate;
    MSPHistoryEntryStorage *_storage;
}

+ (id)mutableHistoryEntryForStorage:(id)arg1;
+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
@property(readonly, nonatomic) MSPHistoryEntryStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic, getter=_isImmutable) _Bool immutable; // @synthesize immutable=_immutable;
@property(copy, nonatomic) NSDate *usageDate; // @synthesize usageDate=_usageDate;
- (id)storageIdentifier;
- (void).cxx_destruct;
- (void)_noteWillMutate;
- (void)_markImmutable;
- (_Bool)isFailed;
@property(nonatomic, getter=tracksRAPReportingOnly) _Bool tracksRAPReportingOnly;
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (_Bool)isUserVisibleDuplicateOfEntry:(id)arg1;
- (id)copyIfValidWithError:(out id *)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)ifMutableSearch:(CDUnknownBlockType)arg1 ifMutableRoute:(CDUnknownBlockType)arg2 ifMutablePlaceDisplay:(CDUnknownBlockType)arg3 ifMutableTransitLineItem:(CDUnknownBlockType)arg4;
- (void)ifSearch:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifPlaceDisplay:(CDUnknownBlockType)arg3 ifTransitLineItem:(CDUnknownBlockType)arg4;
- (id)initWithStorage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

