//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>

@class NSArray, NSDate, NSString, TSKAnnotationAuthor;

__attribute__((visibility("hidden")))
@interface TSDCommentStorage : TSPObject <TSPCopying>
{
    NSString *_text;
    NSDate *_creationDate;
    TSKAnnotationAuthor *_author;
    NSArray *_replies;
    TSDCommentStorage *_parent;
}

@property(nonatomic) __weak TSDCommentStorage *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)canSeeDeleteInFooterWithAuthor:(id)arg1;
- (_Bool)canDeleteWithAuthor:(id)arg1;
- (_Bool)canEditWithAuthor:(id)arg1;
- (_Bool)p_canModifyCommentStorageWithAuthor:(id)arg1 isDelete:(_Bool)arg2;
- (_Bool)p_isOwnerOrNotShared;
- (void)saveToArchive:(struct CommentStorageArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithAuthor:(id)arg1;
- (id)copyByAppendingText:(id)arg1;
- (id)copyWithDeletedReply:(id)arg1;
- (id)copyWithEditedReply:(id)arg1 changedReplyText:(id)arg2;
- (id)copyWithInsertedReply:(id)arg1;
- (id)copyWithText:(id)arg1;
- (void)loadFromArchive:(const struct CommentStorageArchive *)arg1 unarchiver:(id)arg2;
- (void)commentWillBeAddedToDocumentRoot;
- (id)creationDateString;
- (id)description;
- (id)initWithContext:(id)arg1 author:(id)arg2;
- (id)initWithContext:(id)arg1 text:(id)arg2 creationDate:(id)arg3 author:(id)arg4 replies:(id)arg5;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(retain, nonatomic) TSKAnnotationAuthor *author; // @synthesize author=_author;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;

@end

