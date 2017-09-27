//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSDComment.h"
#import "TSKDocumentObject.h"
#import "TSPCopying.h"
#import "TSWPOverlappingField.h"
#import "TSWPTextSpanningObject.h"

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPHighlight : TSPObject <TSDComment, TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField>
{
    TSDCommentStorage *_commentStorage;
    TSWPStorage *_parentStorage;
    NSString *_textAttributeUUIDString;
}

+ (id)defaultHighlightWithContext:(id)arg1 includeCommentWithAuthor:(id)arg2;
+ (id)highlightTextColorForHighlights:(id)arg1;
@property(copy, nonatomic) NSString *textAttributeUUIDString; // @synthesize textAttributeUUIDString=_textAttributeUUIDString;
@property(nonatomic) __weak TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
@property(retain, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
- (void).cxx_destruct;
- (_Bool)isInDocument;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)commentWillBeAddedToDocumentRoot;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
@property(readonly, nonatomic) _Bool isHighlight;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(readonly, nonatomic) NSString *annotationUUID;
- (_Bool)isFloatingComment;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct HighlightArchive *)arg1 unarchiver:(id)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEquivalentToObject:(id)arg1;
- (void)resetTextAttributeUUIDString;
- (_Bool)isCommentEmpty;
@property(readonly, copy) NSString *description;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 commentStorage:(id)arg2 annotationUUID:(id)arg3;
- (id)initWithContext:(id)arg1 commentStorage:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

