//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKImageCanvas.h>

#import "MDSnapshotMap.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap>
{
    // Error parsing type: ^{GlobeView=^^?^{GeoServicesLoader}^{ManifestManager}^{TriggerManager}{shared_ptr<altitude::AnchorManager>=^{AnchorManager}^{__shared_weak_count}}^{DtmCacheNode}^{DtmRequestManager}^{FreezeViewNode}{Projection={Perspective=dddd}{Ortho=dddddd}BB}{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}B{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}^{SimpleTileKey}{__compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}}}BII^{VKClassicGlobeCanvas}BB{AnimationManager={AnimationReferenceTimer=ddd}{unique_ptr<altitude::AnimationTimer, std::__1::default_delete<altitude::AnimationTimer> >={__compressed_pair<altitude::AnimationTimer *, std::__1::default_delete<altitude::AnimationTimer> >=^{AnimationTimer}}}d{vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}^{AnimationObjectHolder}{__compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}}}}{Timer=d}dBddd{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}^{C3mmRequestManager}^{RenderableGroup}IdBB^{LabelDataManagerPrivate}BBBB^{RouteLineManager}^{GlobeCleanupLoader}^{CompleteGlobeTileSetCullingGraph}^{CompleteGlobeTileSetLoader}^{TileSetNode}^{GlobeTileRenderManager}^{CullingNode}^{EarthAdjustedViewNode}^{UserViewNode}^{View}^{BasicViewNode}^{GlobeMainViewNode}^{C3bRequestManager}fB{shared_ptr<bool>=^B^{__shared_weak_count}}^{HeightRequestManager}{map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> >, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >={__tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true> >=Q}}}{Mutex=^v}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}^{FlyoverTour}B{Viewport=iiii}B{set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >={__tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> >=Q}}}^{TileManager}^{ObjectTreeLoader}^{QuickSurfaceManager}^{IntersectorHeight}{shared_ptr<karo::SharedItemManager<altitude::Map, altitude::MapRequestId> >=^{SharedItemManager<altitude::Map, altitude::MapRequestId>}^{__shared_weak_count}}^{BundleLoader}^{ProtocolLoader}^{GeoResourceManager}^{GeoResourceLoader}^{ViewNode}^{ViewportNode}^{View}^{Viewport}{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}I^{Statistics}{atomic<bool>=AB}^{TexturePager}^{IOSurfacePool}^{RealisticRenderer}{DclpUnique<ggl::Texture2D, altitude::util::DclpDefaultDelete<ggl::Texture2D> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<ggl::Texture2D *>=A^{Texture2D}}{function<ggl::Texture2D *()>={type=[32C]}^{__base<ggl::Texture2D *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}}, name: _globeView
    struct unique_ptr<md::GlobeAdapter, std::__1::default_delete<md::GlobeAdapter>> _globeAdapter;
    struct shared_ptr<md::VKGlobeStylesheet> _globeStyleSheet;
    _Bool _notifyFullyLoaded;
    _Bool _notifyFullyDrawn;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isShowingNoDataPlaceholders;
@property(nonatomic) _Bool showsVenues;
@property(nonatomic) _Bool showsBuildings;
- (struct LabelSettings *)labelSettings;
- (void)cancelTileRequests;
- (void)globeDidBecomeFullyDrawn;
- (void)globeWillBecomeFullyDrawn;
- (void)_updateViewTransform;
- (void)_updateCameraFromGlobe;
- (void)_updateViewport;
- (void)didLayout;
- (void)update;
- (void)setMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setMapType:(long long)arg1;
- (void)dealloc;
-     // Error parsing type: @32@0:8^{MapEngine=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}{_retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}^{Device}{_retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> >={__compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> >=^{DisplayLink}}}{unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> >={__compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> >=^{SnapshotRunLoop}}}^{RunLoop}{unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> >={__compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> >=^{AnimationManager}}}{unique_ptr<md::AnimationRunner, std::__1::default_delete<md::AnimationRunner> >={__compressed_pair<md::AnimationRunner *, std::__1::default_delete<md::AnimationRunner> >=^{AnimationRunner}}}{shared_ptr<md::RunLoopController>=^{RunLoopController}^{__shared_weak_count}}@@@@{unique_ptr<md::CartographicRenderer, std::__1::default_delete<md::CartographicRenderer> >={__compressed_pair<md::CartographicRenderer *, std::__1::default_delete<md::CartographicRenderer> >=^{CartographicRenderer}}}{unique_ptr<md::realistic::RealisticRenderer, std::__1::default_delete<md::realistic::RealisticRenderer> >={__compressed_pair<md::realistic::RealisticRenderer *, std::__1::default_delete<md::realistic::RealisticRenderer> >=^{RealisticRenderer}}}^{Renderer}{unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >={__compressed_pair<md::LayoutContext *, std::__1::default_delete<md::LayoutContext> >=^{LayoutContext}}}{_retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{unique_ptr<md::LogicManager, std::__1::default_delete<md::LogicManager> >={__compressed_pair<md::LogicManager *, std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B}16@24, name: initWithMapEngine:manifestConfiguration:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

