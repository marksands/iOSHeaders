//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKTableViewCell, MKTransitDeparturesViewController, NSArray;

@protocol MKTransitDepaturesViewControllerDelegate <NSObject>
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2 fromCell:(MKTableViewCell *)arg3;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 showIncidents:(NSArray *)arg2;
- (void)transitDeparturesViewController:(MKTransitDeparturesViewController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
@end

