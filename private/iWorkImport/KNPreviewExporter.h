//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNSlideExporter.h>

#import "TSKImageExporter.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>
{
}

- (void)setup;
@property(nonatomic) _Bool scaleToFit;
@property(nonatomic) unsigned long long height;
@property(nonatomic) unsigned long long width;
- (id)p_renderingExporterDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

