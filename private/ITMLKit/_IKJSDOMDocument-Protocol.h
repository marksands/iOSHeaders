//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSDOMDocument-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, JSValue, NSArray, NSDictionary, NSString;

@protocol _IKJSDOMDocument <IKJSDOMDocument, JSExport>
- (NSArray *)matchingImpressions:(NSString *)arg1:(JSValue *)arg2;
- (NSArray *)recordedImpressions:(JSValue *)arg1;
- (NSArray *)snapshotImpressions;
- (void)scrollToTop;
- (void)runTest:(NSString *)arg1:(NSDictionary *)arg2;
- (void)replace:(IKDOMDocument *)arg1;
@end

