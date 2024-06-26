#pragma once

#include <iostream>
#include "support_a_dessin.h"

class TextViewer : public SupportADessin {
public:
 TextViewer(std::ostream& flot)
    : flot(flot)
  {}
  virtual ~TextViewer() = default;
  // on ne copie pas les TextViewer
  TextViewer(TextViewer const&)            = delete;
  TextViewer& operator=(TextViewer const&) = delete;
   // mais on peut les déplacer
  TextViewer(TextViewer&&)            = default;
  TextViewer& operator=(TextViewer&&) = default;

  // virtual void dessine(Contenu const& a_dessiner) override;
  // virtual void dessine(Machin const& a_dessiner) override {};
  // virtual void dessine(QuiTourne const& a_dessiner) override {};
  virtual void dessine(Bloc const& a_dessiner) override;
  virtual void dessine(Moucheron const& a_dessiner) override;
  virtual void dessine(Dervish const& a_dessiner) override;

private:
  std::ostream& flot;
};
