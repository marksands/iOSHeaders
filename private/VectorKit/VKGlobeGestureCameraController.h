//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

__attribute__((visibility("hidden")))
@interface VKGlobeGestureCameraController : VKGestureCameraBehavior
{
    // Error parsing type: ^{GlobeView=^^?^{GeoServicesLoader}^{ManifestManager}^{TriggerManager}^{AnchorManagerPrivate}^{DtmCacheNode}^{DtmRequestManager}^{FreezeViewNode}{Projection={Perspective=dddd}{Ortho=dddddd}BB}{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}B{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}^{SimpleTileKey}{__compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}}}BII^{VKClassicGlobeCanvas}BB{AnimationManager={AnimationReferenceTimer=ddd}{unique_ptr<altitude::AnimationTimer, std::__1::default_delete<altitude::AnimationTimer> >={__compressed_pair<altitude::AnimationTimer *, std::__1::default_delete<altitude::AnimationTimer> >=^{AnimationTimer}}}d{vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}^{AnimationObjectHolder}{__compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}}}}{Timer=d}dBddd{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}^{C3mmRequestManager}^{RenderableGroup}IdBB^{LabelDataManagerPrivate}BBBB^{RouteLineManager}^{GlobeCleanupLoader}^{CompleteGlobeTileSetCullingGraph}^{CompleteGlobeTileSetLoader}^{TileSetNode}^{GlobeTileRenderManager}^{CullingNode}^{EarthAdjustedViewNode}^{UserViewNode}^{View}^{BasicViewNode}^{GlobeMainViewNode}^{C3bRequestManager}fB{shared_ptr<bool>=^B^{__shared_weak_count}}^{HeightRequestManager}{map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> >, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >={__tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true> >=Q}}}{Mutex=^v}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}^{FlyoverTour}B{Viewport=iiii}B{set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >={__tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> >=Q}}}^{TileManager}^{ObjectTreeLoader}^{QuickSurfaceManager}^{IntersectorHeight}{shared_ptr<karo::SharedItemManager<altitude::Map, altitude::MapRequestId> >=^{SharedItemManager<altitude::Map, altitude::MapRequestId>}^{__shared_weak_count}}^{BundleLoader}^{ProtocolLoader}^{GeoResourceManager}^{GeoResourceLoader}^{ViewNode}^{ViewportNode}^{View}^{Viewport}{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}I^{Statistics}{atomic<bool>=AB}^{TexturePager}^{IOSurfacePool}^{RealisticRenderer}{DclpUnique<ggl::Texture2D, altitude::util::DclpDefaultDelete<ggl::Texture2D> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<ggl::Texture2D *>=A^{Texture2D}}{function<ggl::Texture2D *()>={type=[32C]}^{__base<ggl::Texture2D *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}}, name: _globeView
    struct CameraManager *_cameraManager;
    double _beganDoublePanPitch;
    double _currentDoublePanPitch;
    _Bool _isPitchIncreasing;
}

- (_Bool)isPitchIncreasing;
- (void)endPitch:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)endRotate:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)beginRotate:(struct CGPoint)arg1;
- (void)endPan:(struct CGPoint)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)beginPan:(struct CGPoint)arg1;
- (void)endZoom:(struct CGPoint)arg1;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginZoom:(struct CGPoint)arg1;
- (void)setCameraManager:(struct CameraManager *)arg1;
-     // Error parsing type: v24@0:8^{GlobeView=^^?^{GeoServicesLoader}^{ManifestManager}^{TriggerManager}^{AnchorManagerPrivate}^{DtmCacheNode}^{DtmRequestManager}^{FreezeViewNode}{Projection={Perspective=dddd}{Ortho=dddddd}BB}{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}B{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}^{SimpleTileKey}{__compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}}}BII^{VKClassicGlobeCanvas}BB{AnimationManager={AnimationReferenceTimer=ddd}{unique_ptr<altitude::AnimationTimer, std::__1::default_delete<altitude::AnimationTimer> >={__compressed_pair<altitude::AnimationTimer *, std::__1::default_delete<altitude::AnimationTimer> >=^{AnimationTimer}}}d{vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}^{AnimationObjectHolder}{__compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}}}}{Timer=d}dBddd{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}^{C3mmRequestManager}^{RenderableGroup}IdBB^{LabelDataManagerPrivate}BBBB^{RouteLineManager}^{GlobeCleanupLoader}^{CompleteGlobeTileSetCullingGraph}^{CompleteGlobeTileSetLoader}^{TileSetNode}^{GlobeTileRenderManager}^{CullingNode}^{EarthAdjustedViewNode}^{UserViewNode}^{View}^{BasicViewNode}^{GlobeMainViewNode}^{C3bRequestManager}fB{shared_ptr<bool>=^B^{__shared_weak_count}}^{HeightRequestManager}{map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> >, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >={__tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true> >=Q}}}{Mutex=^v}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}^{FlyoverTour}B{Viewport=iiii}B{set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >={__tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> >=Q}}}^{TileManager}^{ObjectTreeLoader}^{QuickSurfaceManager}^{IntersectorHeight}{shared_ptr<karo::SharedItemManager<altitude::Map, altitude::MapRequestId> >=^{SharedItemManager<altitude::Map, altitude::MapRequestId>}^{__shared_weak_count}}^{BundleLoader}^{ProtocolLoader}^{GeoResourceManager}^{GeoResourceLoader}^{ViewNode}^{ViewportNode}^{View}^{Viewport}{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}I^{Statistics}{atomic<bool>=AB}^{TexturePager}^{IOSurfacePool}^{RealisticRenderer}{DclpUnique<ggl::Texture2D, altitude::util::DclpDefaultDelete<ggl::Texture2D> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<ggl::Texture2D *>=A^{Texture2D}}{function<ggl::Texture2D *()>={type=[32C]}^{__base<ggl::Texture2D *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}}16, name: setGlobeView:

@end

