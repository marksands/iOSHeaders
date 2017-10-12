//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet;

@interface ABBufferQuery : NSObject
{
    _Bool _fetchLinkedContacts;
    _Bool _needsMultivalueTable;
    _Bool _needsMultivalueEntryTable;
    _Bool _needsPersonTable;
    _Bool _needsPersonLinkTable;
    _Bool _requestedImageData;
    _Bool _requestedImageCropRect;
    _Bool _requestedImageThumbnail;
    _Bool _requestedImageFullscreenData;
    _Bool _requestedHasImageData;
    unsigned int _sortOrder;
    void *_addressBook;
    struct CPSqliteStatement *_statement;
    NSIndexSet *_requestedPropertyIdentifiers;
    NSIndexSet *_requestedMultivalueIdentifiers;
    struct __CFDictionary *_propertyIndices;
}

@property(readonly, nonatomic) _Bool requestedHasImageData; // @synthesize requestedHasImageData=_requestedHasImageData;
@property(readonly, nonatomic) _Bool requestedImageFullscreenData; // @synthesize requestedImageFullscreenData=_requestedImageFullscreenData;
@property(readonly, nonatomic) _Bool requestedImageThumbnail; // @synthesize requestedImageThumbnail=_requestedImageThumbnail;
@property(readonly, nonatomic) _Bool requestedImageCropRect; // @synthesize requestedImageCropRect=_requestedImageCropRect;
@property(readonly, nonatomic) _Bool requestedImageData; // @synthesize requestedImageData=_requestedImageData;
@property(readonly, nonatomic) _Bool needsPersonLinkTable; // @synthesize needsPersonLinkTable=_needsPersonLinkTable;
@property(readonly, nonatomic) _Bool needsPersonTable; // @synthesize needsPersonTable=_needsPersonTable;
@property(readonly, nonatomic) _Bool needsMultivalueEntryTable; // @synthesize needsMultivalueEntryTable=_needsMultivalueEntryTable;
@property(readonly, nonatomic) _Bool needsMultivalueTable; // @synthesize needsMultivalueTable=_needsMultivalueTable;
@property(readonly, nonatomic) _Bool fetchLinkedContacts; // @synthesize fetchLinkedContacts=_fetchLinkedContacts;
@property(nonatomic) struct __CFDictionary *propertyIndices; // @synthesize propertyIndices=_propertyIndices;
@property(readonly, nonatomic) NSIndexSet *requestedMultivalueIdentifiers; // @synthesize requestedMultivalueIdentifiers=_requestedMultivalueIdentifiers;
@property(readonly, nonatomic) NSIndexSet *requestedPropertyIdentifiers; // @synthesize requestedPropertyIdentifiers=_requestedPropertyIdentifiers;
@property(readonly, nonatomic) unsigned int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) struct CPSqliteStatement *statement; // @synthesize statement=_statement;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void)appendBindParameterMarkersToQueryString:(id)arg1 count:(unsigned long long)arg2;
- (void)appendOrderByClauseToQueryString:(id)arg1;
- (void)appendFromClauseToQueryString:(id)arg1;
- (void)prependWithClauseToQueryString:(id)arg1 whereClause:(id)arg2;
- (void)appendCustomPropertySelectsToQueryString:(id)arg1;
- (void)dealloc;
- (void)_initSetupPropertySet:(struct __CFSet *)arg1 includeLinkedContacts:(_Bool)arg2;
- (id)initWithAddressBook:(void *)arg1 whereClause:(id)arg2 whereClauseBindBlock:(CDUnknownBlockType)arg3 requestedProperties:(struct __CFSet *)arg4 includeLinkedContacts:(_Bool)arg5 sortOrder:(unsigned int)arg6;

@end
