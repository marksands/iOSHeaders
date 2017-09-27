//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentImageModel.h"

@interface ICAttachmentImageModel (PreviewGeneration)
- (void)generatePreviewsInOperation:(id)arg1;
- (id)generateFullSizePreviewWithAttachmentIdentifier:(id)arg1 existingPreviewImage:(id)arg2 markupModelData:(id)arg3 imageOrientation:(long long)arg4 imageFilterType:(short)arg5 mediaDecryptedData:(id)arg6 mediaURL:(id)arg7 mediaSize:(struct CGSize)arg8 croppingQuad:(id)arg9;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsDuringCloudActivity;
@end

