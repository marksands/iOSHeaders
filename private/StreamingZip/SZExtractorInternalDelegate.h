//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "StreamingUnzipDelegateProtocol.h"

__attribute__((visibility("hidden")))
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol>
{
    id <SZExtractorDelegate> delegate;
}

@property __weak id <SZExtractorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)setExtractionProgress:(double)arg1;

@end

