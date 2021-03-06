//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKDocumentObject.h"
#import "TSKModel.h"
#import "TSWPSection.h"

@class NSString, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection, TSKModel>
{
    TSWPStorage *_parentStorage;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) __weak TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (void).cxx_destruct;
- (id)pageMasterOwningModel:(id)arg1;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

