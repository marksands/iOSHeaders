//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/_NUExportResult.h>

#import "NUImageExportResult.h"

@class NSData, NSString, NSURL, NUImageGeometry;

@interface _NUImageExportResult : _NUExportResult <NUImageExportResult>
{
    NSData *_destinationData;
}

@property(retain) NSData *destinationData; // @synthesize destinationData=_destinationData;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSURL *destinationURL; // @dynamic destinationURL;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

