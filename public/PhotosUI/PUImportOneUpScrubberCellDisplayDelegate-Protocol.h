//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class PUImportItemViewModel, PUImportOneUpScrubberCell;

@protocol PUImportOneUpScrubberCellDisplayDelegate
- (void)importOneUpScrubberCell:(PUImportOneUpScrubberCell *)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importOneUpScrubberCell:(PUImportOneUpScrubberCell *)arg1 requestedThumbnailForImportItem:(PUImportItemViewModel *)arg2 completion:(void (^)(UIImage *, _Bool))arg3;
@end

