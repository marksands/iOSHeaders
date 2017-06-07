//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

#import <iWorkImport/TSDComment-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

__attribute__((visibility("hidden")))
@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment>
{
    TSDCommentStorage *_commentStorage;
}

+ (id)p_defaultShadow;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (id)p_defaultStroke;
+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize)arg2 storage:(id)arg3;
+ (void)upgradeCommentInfoStorage:(id)arg1;
+ (void)upgradeCommentParagraphStylesForStylesheet:(id)arg1;
+ (void)upgradeCommentInfoStyle:(id)arg1;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_commentParagraphStyleForStylesheet:(id)arg1 fontSize:(unsigned long long)arg2;
+ (id)commentParagraphStyleForStylesheet:(id)arg1;
+ (id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)arg1;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)commentStyleIdentifier;
+ (id)bezierPathForExportCommentOutline;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *annotationUUID;
- (id)commandForDeletingComment;
- (id)commandForDeletingReply:(id)arg1;
- (id)commandForEditingReply:(id)arg1 withReplyText:(id)arg2;
- (id)commandForCreatingReplyWithReplyText:(id)arg1 author:(id)arg2;
- (id)commandForChangingCommentText:(id)arg1;
- (_Bool)isInDocument;
- (_Bool)wantsAnnotationPopover;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (void)saveToArchive:(struct CommentInfoArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct CommentInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(CDUnknownBlockType)arg1;
- (Class)editorClass;
- (_Bool)supportsAttachedComments;
@property(readonly, nonatomic) _Bool isHighlight;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
- (Class)layoutClass;
- (Class)repClass;
- (_Bool)supportsHyperlinks;
- (_Bool)isLockable;
- (int)elementKind;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 commentStorage:(id)arg6;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)creationDateString;
- (id)pathSourceForExportCommentOutline;
@property(retain, nonatomic) TSDCommentStorage *commentStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

