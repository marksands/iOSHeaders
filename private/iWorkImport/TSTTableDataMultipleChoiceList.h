//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTPopUpMenuModel;

__attribute__((visibility("hidden")))
@interface TSTTableDataMultipleChoiceList : TSTTableDataObject
{
    TSTPopUpMenuModel *_popUpMenuModel;
}

@property(readonly, nonatomic) TSTPopUpMenuModel *popUpMenuModel; // @synthesize popUpMenuModel=_popUpMenuModel;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithPopUpMenuModel:(id)arg1 refCount:(unsigned int)arg2;

@end

