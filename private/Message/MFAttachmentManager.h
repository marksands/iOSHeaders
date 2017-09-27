//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFFileCompressionQueue, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MFAttachmentManager : NSObject
{
    NSObject<OS_dispatch_queue> *_arrayAccessQueue;
    NSMutableDictionary *_providers;
    NSMutableDictionary *_attachments;
    NSMutableDictionary *_metadata;
    NSLock *_metaDataLock;
    NSObject<OS_dispatch_queue> *_imageScalingQueue;
    MFFileCompressionQueue *_compressionQueue;
}

+ (id)supportedDocumentUTIs;
+ (id)defaultManager;
+ (id)allManagers;
- (void)clearMetadataForAttachment:(id)arg1;
- (id)metadataForAttachment:(id)arg1 forKey:(id)arg2;
- (void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;
- (id)_contentIDForAttachment:(id)arg1;
- (void)setContentID:(id)arg1 forAttachment:(id)arg2;
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)removeAttachmentForURL:(id)arg1;
- (_Bool)updateAttachment:(id)arg1 withNewData:(id)arg2;
- (void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2;
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;
- (void)cancelFetchForAttachment:(id)arg1;
- (void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2;
- (void)fetchDataSynchronouslyForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1;
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 syncLock:(id *)arg3;
- (id)attachmentsForContext:(id)arg1;
- (id)attachmentForContentID:(id)arg1 preferredSchemes:(id)arg2;
- (id)attachmentForContentID:(id)arg1;
- (id)attachmentForCID:(id)arg1;
- (id)attachmentForTextAttachment:(id)arg1 error:(id *)arg2;
- (id)attachmentsForURLs:(id)arg1 error:(id *)arg2;
- (id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;
- (id)attachmentForURL:(id)arg1 error:(id *)arg2;
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id *)arg2;
- (id)_filePathForAttachment:(id)arg1;
- (_Bool)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;
- (id)compressionQueue;
- (id)imageScalingQueue;
- (void)removeProvider:(id)arg1;
- (void)removeProviderForBaseURL:(id)arg1;
- (void)addProvider:(id)arg1 forBaseURL:(id)arg2;
- (void)dealloc;
- (id)init;

@end

