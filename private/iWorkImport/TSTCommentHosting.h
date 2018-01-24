//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDComment.h"

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSTInfo;

__attribute__((visibility("hidden")))
@interface TSTCommentHosting : NSObject <TSDComment>
{
    TSDCommentStorage *mStorage;
    TSTInfo *_tableInfo;
    NSString *_annotationUUID;
    struct TSTCellUID _cellUID;
}

@property(retain, nonatomic) NSString *annotationUUID; // @synthesize annotationUUID=_annotationUUID;
@property(readonly, nonatomic) struct TSTCellUID cellUID; // @synthesize cellUID=_cellUID;
@property(retain, nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isInDocument;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, nonatomic) _Bool isHighlight;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(readonly, nonatomic) struct TSUCellCoord cellID;
- (_Bool)isFloatingComment;
- (Class)editorClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)p_updateAnnotationUUID;
- (id)initWithStorage:(id)arg1 forTableInfo:(id)arg2 cellID:(struct TSUCellCoord)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

