//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class QLScrubView;

@protocol QLScrubViewDataSource
- (struct CGSize)scrubView:(QLScrubView *)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (void)scrubView:(QLScrubView *)arg1 thumbnailForPage:(long long)arg2 size:(struct CGSize)arg3 withCompletionBlock:(void (^)(UIImage *))arg4;
- (long long)numberOfPagesInScrubView:(QLScrubView *)arg1;
@end

