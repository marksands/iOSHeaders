//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray, NSObject, NSString, TSPLazyReferenceArray;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface TSPUnknownObject : TSPObject
{
    shared_ptr_bafc106c _archiveInfo;
    NSObject<OS_dispatch_data> *_messagesData;
    NSString *_packageLocator;
    TSPLazyReferenceArray *_objects;
    NSArray *_datas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;
- (void)saveToArchiver:(id)arg1;
- (_Bool)validatedLoadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initWithContext:(id)arg1;

@end

