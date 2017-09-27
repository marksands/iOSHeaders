//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MPModelGenericObject, MPModelPlayEvent;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying>
{
    _Bool _allowsStoreContainerImport;
    MPModelPlayEvent *_playEvent;
    MPModelGenericObject *_itemGenericObject;
    long long _repeatType;
}

@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(retain, nonatomic) MPModelGenericObject *itemGenericObject; // @synthesize itemGenericObject=_itemGenericObject;
@property(retain, nonatomic) MPModelPlayEvent *playEvent; // @synthesize playEvent=_playEvent;
@property(nonatomic) _Bool allowsStoreContainerImport; // @synthesize allowsStoreContainerImport=_allowsStoreContainerImport;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

