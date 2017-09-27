//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OFNSOperation.h"

@class NSURL, OKDocument;

@interface OKDocumentImportOperation : OFNSOperation
{
    OKDocument *_document;
    NSURL *_resourceURL;
    NSURL *_importedResourceURL;
    _Bool _opaque;
    NSURL *_temporaryDownloadedMediaFileURL;
    NSURL *_temporaryTranscodedMediaFileURL;
    NSURL *_temporaryThumbnailMediaFileURL;
}

@property(retain, nonatomic) NSURL *temporaryThumbnailMediaFileURL; // @synthesize temporaryThumbnailMediaFileURL=_temporaryThumbnailMediaFileURL;
@property(retain, nonatomic) NSURL *temporaryTranscodedMediaFileURL; // @synthesize temporaryTranscodedMediaFileURL=_temporaryTranscodedMediaFileURL;
@property(retain, nonatomic) NSURL *temporaryDownloadedMediaFileURL; // @synthesize temporaryDownloadedMediaFileURL=_temporaryDownloadedMediaFileURL;
@property(readonly, copy, nonatomic) NSURL *importedResourceURL; // @synthesize importedResourceURL=_importedResourceURL;
- (void)cleanupOperation;
- (void)finishOperation;
- (void)cancelOperation;
- (unsigned long long)launchOperation;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 resourceURL:(id)arg2 importedResourceURL:(id)arg3 opaque:(_Bool)arg4;
- (id)init;

@end

