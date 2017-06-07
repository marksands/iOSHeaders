//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSFileHandle, NSString, NSURL, QLTThumbnailRequest, QLThumbnailItem;

@protocol QLThumbnailsInterface
- (void)thumbnailForRequest:(QLTThumbnailRequest *)arg1 completionHandler:(void (^)(NSData *, QLTBitmapFormat *, NSError *))arg2;
- (void)requestThumbnailOfMaximumSize:(struct CGSize)arg1 scale:(double)arg2 forThumbnailItem:(QLThumbnailItem *)arg3 completionHandler:(void (^)(UIImage *))arg4;
- (void)requestWritingThumbnailOfMaximumSize:(struct CGSize)arg1 forDocumentAtURL:(NSURL *)arg2 toFileHandle:(NSFileHandle *)arg3 atBackgroundPriority:(_Bool)arg4 completionHandler:(void (^)(id <QLThumbnailGenerationRequest>))arg5;
- (void)requestWritingThumbnailOfMaximumSize:(struct CGSize)arg1 forDocumentAtURL:(NSURL *)arg2 sandboxExtension:(NSString *)arg3 toFileHandle:(NSFileHandle *)arg4 atBackgroundPriority:(_Bool)arg5 completionHandler:(void (^)(id <QLThumbnailGenerationRequest>))arg6;
- (void)askThumbnailAdditionIndex:(void (^)(id <QLThumbnailAdditionIndexInterface>))arg1;
- (void)hasThumbnailForURL:(NSURL *)arg1 updateLastHitDate:(_Bool)arg2 andSize:(unsigned long long)arg3 completion:(void (^)(_Bool))arg4;
- (void)removeThumbnailAdditionsOnURL:(NSURL *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)thumbnailsStoreURLForURL:(NSURL *)arg1 completionBlock:(void (^)(NSURL *, NSDictionary *, NSString *, NSError *))arg2;
@end

